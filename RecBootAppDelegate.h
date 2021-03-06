//
//  RecBootAppDelegate.h
//  RecBoot
//
//  Created by Sebastien Peek on 23/12/10.
//  Copyright 2010 sebby.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MobileDevice.h"

@interface RecBootAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
	
	IBOutlet NSTextField *deviceDetails;
	
}

- (IBAction)exitRec:(id)pId;
- (IBAction)enterRec:(id)pId;

- (void)populateData;
- (void)dePopulateData;
- (void)recoveryCallback;
- (NSString *)getDeviceValue:(NSString *)value;

@property (assign) IBOutlet NSWindow *window;

@end
