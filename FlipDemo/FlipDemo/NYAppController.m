//
//  NYAppController.m
//  FlipTest
//
//  Created by Nima Yousefi on 3/18/12.
//  Copyright (c) 2012 Nima Yousefi. All rights reserved.
//

#import "NYAppController.h"
#import "NSWindowFlipper.h"

@implementation NYAppController

@synthesize mainWindow, detailWindow;

- (IBAction)showMainWindow:(id)sender
{
    [self.detailWindow flipToWindow:self.mainWindow withDuration:1.0 shadowed:YES];
}

- (IBAction)showDetailWindow:(id)sender
{
    [self.mainWindow flipToWindow:self.detailWindow withDuration:1.0 shadowed:YES];
}

@end
