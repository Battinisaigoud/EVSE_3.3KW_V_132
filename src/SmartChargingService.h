// 1 "D:\\Current_Project_15-10-2022\\Current_project_13-12-2022\\Testing_Issues\\Testing_Issues_15-02-2023\\POD_EVRE_GENERIC_IOCL_14-03-2023\\POD_EVRE_GENERIC\\src\\SmartChargingService.h"
// matth-x/ESP8266-OCPP
// Copyright Matthias Akstaller 2019 - 2020
// MIT License

#ifndef SMARTCHARGINGSERVICE_H
#define SMARTCHARGINGSERVICE_H

#define CHARGEPROFILEMAXSTACKLEVEL 20

#include <ArduinoJson.h>
#include <TimeLib.h>

#include "SmartChargingModel.h"

typedef void (*OnLimitChange)(float newLimit);

class SmartChargingService {
private:
  const float DEFAULT_CHARGE_LIMIT;
  ChargingProfile *ChargePointMaxProfile[CHARGEPROFILEMAXSTACKLEVEL];
  ChargingProfile *TxDefaultProfile[CHARGEPROFILEMAXSTACKLEVEL];
  ChargingProfile *TxProfile[CHARGEPROFILEMAXSTACKLEVEL];
  OnLimitChange onLimitChange;
  float limitBeforeChange;
  time_t nextChange;
  time_t chargingSessionStart;
  int chargingSessionTransactionID;
  bool chargingSessionIsActive;
  
public:
  SmartChargingService(float chargeLimit);
  void beginCharging(time_t t, int transactionID);
  void beginChargingNow();
  void endChargingNow();
  void updateChargingProfile(JsonObject *json);
  void inferenceLimit(time_t t, float *limit, time_t *validTo);
  float inferenceLimitNow();
  void setOnLimitChange(OnLimitChange onLimitChange);
  void writeOutCompositeSchedule(JsonObject *json);
  void loop();
};


#endif
