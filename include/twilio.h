/*
 * =====================================================================================
 *
 *       Filename:  twilio.h
 *
 *    Description:  Twilio library header file
 *
 *        Version:  1.0
 *        Created:  07/28/2012 01:25:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  William Dignazio (slackwill), slackwill@csh.rit.edu
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef TWILIO_GAURD_H
#define TWILIO_GARUD_H

#include <curl/curl.h>
#include <jansson.h> 
#include "rest.h"
#include "encode.h"

#define VERSION "2010-04-01"; 

#define OK 0

#define BASEURL "https://%s:%s@api.twilio.com%s"

/*#############################################################################
 *#                           REST API MACROS                                 #
 *#############################################################################
 */

/* TODO: Allow seperate extension, xml is the alternative */
#define POST_SMS "/2010-04-01/Accounts/%s/SMS/Messages.json" 

/*###########################################################################*/

extern CURL *handle; //Instance curl handler
extern char* asid; //Account sid
extern char* atoken; //Acount token

typedef int twilio_status; 

typedef struct twilio_request_t { 
} twilio_request_t;  

void escape(char *, char **); 

twilio_status init_twilio_api(char*, char*); 
void build_uri(char *, char**);

#endif 
