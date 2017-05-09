
#ifndef _COMMANDS_H    
#define _COMMANDS_H

#define CMD_ECHO                        "echo"
#define CMD_VERSION                     "version"

#define CMD_SET_PWM_DUTY                "set_pwm_duty"

#define CMD_ADC_STREAM                  "adc_stream_channels"
#define CMD_ADC_DECIMATE                "adc_set_decimation"
#define CMD_ADC_READ_LAST_CONVERSION    "adc_read_sample"

#define CMD_FEEDBACK_CONFIG             "fb_config"
#define CMD_FEEDBACK_START              "fb_start"
#define CMD_FEEDBACK_STOP               "fb_stop"
#define CMD_FEEDBACK_SETPOINT           "fb_set_setpoint"
#define CMD_FEEDBACK_READ_STATUS        "fb_read_status"
#define CMD_FEEDBACK_SET_LIMITS         0x35




#endif
