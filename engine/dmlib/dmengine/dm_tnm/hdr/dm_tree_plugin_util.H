/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DM_TREE_PLUGIN_UTIL_H
#define _DM_TREE_PLUGIN_UTIL_H

#ifndef __cplusplus
#error "This is a C++ header file; it requires C++ to compile."
#endif

//------------------------------------------------------------------------
//            Header Name: dm_tree_plugin_util.H
//
//  General Description: This file contains prototypes of plugin utilities
//------------------------------------------------------------------------

#include "dmPluginManager.h"
#include "SyncML_DM_Archiver.H"  

SYNCML_DM_RET_STATUS_T DmRemoveTempfile(DMString &dirName);

SYNCML_DM_RET_STATUS_T DmCallPluginFunction(CPCHAR szURI, 
                                            FILESETTYPE nFileSet, 
                                            SYNCML_DM_COMMAND_T type);

SYNCML_DM_RET_STATUS_T DmExecutePlugin(CPCHAR path, 
                                       CPCHAR args, 
                                       CPCHAR szCorrelator, 
                                       DMString & oResult);

SYNCML_DM_RET_STATUS_T DmCheckConstraint(CPCHAR szURI, 
                                         FILESETTYPE * nFileSet,
                                         FILESETTYPE * nFileSetToRollback);

#endif
