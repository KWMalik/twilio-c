/*
 * =====================================================================================
 *
 *       Filename:  rest.h
 *
 *    Description:  Rest API header file
 *
 *        Version:  1.0
 *        Created:  08/01/2012 11:35:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  William Dignazio (slackwill), slackwill@csh.rit.edu
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef REST_H_GAURD
#define REST_H_GAURD

#include <twilio.h>

typedef void(*twilio_rest_callback)(json_t)

typedef struct twilio_sms_return_t { 
    char *asid; 
    char *version; 
    char *body; 
    char *created; 
    char *sent; 
    char *updated; 
    char *direction; 
    char *from; 
    char *price; 
    char *sid;
    char *status; 
    char *to; 
    char *uri; 
} twilio_post_t; 

void post_sms(char*,char*,char*, twilo_rest_callback*); 

#endif 
