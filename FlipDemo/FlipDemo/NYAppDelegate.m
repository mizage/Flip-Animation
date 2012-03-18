//
//  NYAppDelegate.m
//  FlipDemo
//
//  Created by Nima Yousefi on 3/18/12.
//  Copyright (c) 2012 Nima Yousefi. All rights reserved.
//

#import "NYAppDelegate.h"

@implementation NYAppDelegate

@synthesize window = _window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)sender
{
    return YES;
}

@end
