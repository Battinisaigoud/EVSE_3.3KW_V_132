// 1 "D:\\Current_Project_15-10-2022\\Current_project_13-12-2022\\Testing_Issues\\Testing_Issues_15-02-2023\\POD_EVRE_GENERIC_IOCL_14-03-2023\\POD_EVRE_GENERIC\\src\\ClearCache.h"
/*
 * CLEARCAHCE_H
 * 
 * Copyright 2022 raja <raja@raja-IdeaPad-Gaming-3-15IMH05>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#ifndef CLEARCAHCE_H
#define CLEARCAHCE_H

#include "OcppMessage.h"

class ClearCache : public OcppMessage {
private:
bool accepted = false;
public:
  ClearCache();

  const char* getOcppOperationType();

  DynamicJsonDocument* createReq();

  void processConf(JsonObject payload);
  
  DynamicJsonDocument* createConf();

  void processReq(JsonObject payload);


};

#endif
