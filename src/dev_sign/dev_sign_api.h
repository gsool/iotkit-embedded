#ifndef _DEV_SIGN_H_
#define _DEV_SIGN_H_

#include "infra_types.h"
#include "infra_defs.h"

typedef struct {
    char *hostname;
    char *clientid;
    char *username;
    char *password;
    const char *pub_key;
} iotx_sign_mqtt_t;

uint8_t IOT_Sign_MQTT(iotx_cloud_region_types_t region, iotx_sign_mqtt_t *signout);

#endif