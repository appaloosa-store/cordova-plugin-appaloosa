#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import "OTAppaloosaAgentDelegate.h"

@interface AppaloosaPhonegap : CDVPlugin <OTAppaloosaAgentDelegate>

- (void)initialisation:(CDVInvokedUrlCommand*)command;

@end