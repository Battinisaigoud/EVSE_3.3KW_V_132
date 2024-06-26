// 1 "D:\\Current_Project_15-10-2022\\Current_project_13-12-2022\\Testing_Issues\\Testing_Issues_15-02-2023\\POD_EVRE_GENERIC_IOCL_14-03-2023\\POD_EVRE_GENERIC\\src\\Peripherals.h"
// matth-x/ESP8266-OCPP
// Copyright Matthias Akstaller 2019 - 2020
// MIT License

#ifndef PERIPHERALS_H
#define PERIPHERALS_H

#include <Arduino.h>
#include <WiFi.h>
//peripherals headers
#include <SPI.h>
#include "libraries/MFRC522/src/MFRC522.h"
#include "ATM90E36.h"

#define READ_RFID_FAIL 5 //Counter for RFID read fail attempts 

#define RST_PIN         22
#define SS_PIN          21

//extern MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance
String readRfidTag(bool trigger, MFRC522 *mfrc522Input);
//bool triggerRfid = true; // Triggering RFID to read mode

#endif
