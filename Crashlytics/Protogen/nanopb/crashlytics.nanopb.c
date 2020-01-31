/*
 * Copyright 2020 Google
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

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.3 */

#include "crashlytics.nanopb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_crashlytics_Session_fields[12] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session, generator, generator, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session, identifier, generator, 0),
    PB_FIELD(  3, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, started_at, identifier, 0),
    PB_FIELD(  4, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, ended_at, started_at, 0),
    PB_FIELD(  5, BOOL    , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, crashed, ended_at, 0),
    PB_FIELD(  6, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, user, crashed, &google_crashlytics_Session_User_fields),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, app, user, &google_crashlytics_Session_Application_fields),
    PB_FIELD(  8, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, os, app, &google_crashlytics_Session_OperatingSystem_fields),
    PB_FIELD(  9, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, device, os, &google_crashlytics_Session_Device_fields),
    PB_FIELD( 10, MESSAGE , REPEATED, POINTER , OTHER, google_crashlytics_Session, events, device, &google_crashlytics_Session_Event_fields),
    PB_FIELD( 12, UENUM   , SINGULAR, STATIC  , OTHER, google_crashlytics_Session, generator_type, events, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_User_fields[2] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_User, identifier, identifier, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Application_fields[8] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_Application, identifier, identifier, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Application, version, identifier, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Application, display_version, version, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Application, organization, display_version, &google_crashlytics_Session_Application_Organization_fields),
    PB_FIELD(  6, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Application, installation_uuid, organization, 0),
    PB_FIELD(  8, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Application, development_platform, installation_uuid, 0),
    PB_FIELD(  9, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Application, development_platform_version, development_platform, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Application_Organization_fields[2] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_Application_Organization, api_key, api_key, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_OperatingSystem_fields[5] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_OperatingSystem, platform, platform, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_OperatingSystem, version, platform, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_OperatingSystem, build_version, version, 0),
    PB_FIELD(  4, BOOL    , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_OperatingSystem, jailbroken, build_version, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Device_fields[6] = {
    PB_FIELD(  3, UENUM   , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_Device, arch, arch, 0),
    PB_FIELD(  4, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Device, model, arch, 0),
    PB_FIELD(  6, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Device, ram, model, 0),
    PB_FIELD(  7, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Device, disk_space, ram, 0),
    PB_FIELD(  9, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Device, language, disk_space, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_fields[6] = {
    PB_FIELD(  1, UINT64  , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_Event, timestamp, timestamp, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event, type, timestamp, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event, app, type, &google_crashlytics_Session_Event_Application_fields),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event, device, app, &google_crashlytics_Session_Event_Device_fields),
    PB_FIELD(  6, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event, log, device, &google_crashlytics_Session_Event_Log_fields),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_fields[5] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_Event_Application, execution, execution, &google_crashlytics_Session_Event_Application_Execution_fields),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, google_crashlytics_Session_Event_Application, custom_attributes, execution, &google_crashlytics_CustomAttribute_fields),
    PB_FIELD(  3, BOOL    , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application, background, custom_attributes, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application, ui_orientation, background, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_Execution_fields[4] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_crashlytics_Session_Event_Application_Execution, threads, threads, &google_crashlytics_Session_Event_Application_Execution_Thread_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution, signal, threads, &google_crashlytics_Session_Event_Application_Execution_Signal_fields),
    PB_FIELD(  4, MESSAGE , REPEATED, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution, binaries, signal, &google_crashlytics_Session_Event_Application_Execution_BinaryImage_fields),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_Execution_Thread_fields[7] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_Event_Application_Execution_Thread, name, name, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread, importance, name, 0),
    PB_FIELD(  3, MESSAGE , REPEATED, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread, frames, importance, &google_crashlytics_Session_Event_Application_Execution_Thread_Frame_fields),
    PB_FIELD(  4, MESSAGE , REPEATED, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread, registers, frames, &google_crashlytics_Session_Event_Application_Execution_Thread_Register_fields),
    PB_FIELD(  5, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread, alternate_name, registers, 0),
    PB_FIELD(  6, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread, objc_selector_name, alternate_name, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_Execution_Thread_Frame_fields[5] = {
    PB_FIELD(  1, UINT64  , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_Event_Application_Execution_Thread_Frame, pc, pc, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread_Frame, symbol, pc, 0),
    PB_FIELD(  4, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread_Frame, offset, symbol, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread_Frame, importance, offset, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_Execution_Thread_Register_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_Event_Application_Execution_Thread_Register, name, name, 0),
    PB_FIELD(  2, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_Thread_Register, value, name, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_Execution_Signal_fields[4] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_Event_Application_Execution_Signal, name, name, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_Signal, code, name, 0),
    PB_FIELD(  3, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_Signal, address, code, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Application_Execution_BinaryImage_fields[6] = {
    PB_FIELD(  1, UINT64  , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_Event_Application_Execution_BinaryImage, base_address, base_address, 0),
    PB_FIELD(  2, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_BinaryImage, size, base_address, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_BinaryImage, name, size, 0),
    PB_FIELD(  4, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Session_Event_Application_Execution_BinaryImage, uuid, name, 0),
    PB_FIELD(  5, UENUM   , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Application_Execution_BinaryImage, arch, uuid, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Device_fields[4] = {
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , FIRST, google_crashlytics_Session_Event_Device, orientation, orientation, 0),
    PB_FIELD(  5, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Device, ram_used, orientation, 0),
    PB_FIELD(  6, UINT64  , SINGULAR, STATIC  , OTHER, google_crashlytics_Session_Event_Device, disk_used, ram_used, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Session_Event_Log_fields[2] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Session_Event_Log, content, content, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_CustomAttribute_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_CustomAttribute, key, key, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_CustomAttribute, value, key, 0),
    PB_LAST_FIELD
};

const pb_field_t google_crashlytics_Report_fields[8] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_crashlytics_Report, sdk_version, sdk_version, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Report, gmp_app_id, sdk_version, 0),
    PB_FIELD(  4, UENUM   , SINGULAR, STATIC  , OTHER, google_crashlytics_Report, platform, gmp_app_id, 0),
    PB_FIELD(  5, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Report, installation_uuid, platform, 0),
    PB_FIELD(  6, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Report, build_version, installation_uuid, 0),
    PB_FIELD(  7, BYTES   , SINGULAR, POINTER , OTHER, google_crashlytics_Report, display_version, build_version, 0),
    PB_FIELD(  8, MESSAGE , SINGULAR, STATIC  , OTHER, google_crashlytics_Report, session, display_version, &google_crashlytics_Session_fields),
    PB_LAST_FIELD
};





/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_crashlytics_Session, user) < 65536 && pb_membersize(google_crashlytics_Session, app) < 65536 && pb_membersize(google_crashlytics_Session, os) < 65536 && pb_membersize(google_crashlytics_Session, device) < 65536 && pb_membersize(google_crashlytics_Session_Application, organization) < 65536 && pb_membersize(google_crashlytics_Session_Event, app) < 65536 && pb_membersize(google_crashlytics_Session_Event, device) < 65536 && pb_membersize(google_crashlytics_Session_Event, log) < 65536 && pb_membersize(google_crashlytics_Session_Event_Application, execution) < 65536 && pb_membersize(google_crashlytics_Session_Event_Application_Execution, signal) < 65536 && pb_membersize(google_crashlytics_Report, session) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_crashlytics_Session_google_crashlytics_Session_User_google_crashlytics_Session_Application_google_crashlytics_Session_Application_Organization_google_crashlytics_Session_OperatingSystem_google_crashlytics_Session_Device_google_crashlytics_Session_Event_google_crashlytics_Session_Event_Application_google_crashlytics_Session_Event_Application_Execution_google_crashlytics_Session_Event_Application_Execution_Thread_google_crashlytics_Session_Event_Application_Execution_Thread_Frame_google_crashlytics_Session_Event_Application_Execution_Thread_Register_google_crashlytics_Session_Event_Application_Execution_Signal_google_crashlytics_Session_Event_Application_Execution_BinaryImage_google_crashlytics_Session_Event_Device_google_crashlytics_Session_Event_Log_google_crashlytics_CustomAttribute_google_crashlytics_Report)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_crashlytics_Session, user) < 256 && pb_membersize(google_crashlytics_Session, app) < 256 && pb_membersize(google_crashlytics_Session, os) < 256 && pb_membersize(google_crashlytics_Session, device) < 256 && pb_membersize(google_crashlytics_Session_Application, organization) < 256 && pb_membersize(google_crashlytics_Session_Event, app) < 256 && pb_membersize(google_crashlytics_Session_Event, device) < 256 && pb_membersize(google_crashlytics_Session_Event, log) < 256 && pb_membersize(google_crashlytics_Session_Event_Application, execution) < 256 && pb_membersize(google_crashlytics_Session_Event_Application_Execution, signal) < 256 && pb_membersize(google_crashlytics_Report, session) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_google_crashlytics_Session_google_crashlytics_Session_User_google_crashlytics_Session_Application_google_crashlytics_Session_Application_Organization_google_crashlytics_Session_OperatingSystem_google_crashlytics_Session_Device_google_crashlytics_Session_Event_google_crashlytics_Session_Event_Application_google_crashlytics_Session_Event_Application_Execution_google_crashlytics_Session_Event_Application_Execution_Thread_google_crashlytics_Session_Event_Application_Execution_Thread_Frame_google_crashlytics_Session_Event_Application_Execution_Thread_Register_google_crashlytics_Session_Event_Application_Execution_Signal_google_crashlytics_Session_Event_Application_Execution_BinaryImage_google_crashlytics_Session_Event_Device_google_crashlytics_Session_Event_Log_google_crashlytics_CustomAttribute_google_crashlytics_Report)
#endif


/* @@protoc_insertion_point(eof) */
