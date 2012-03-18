//
//  NYAppController.h
//  FlipTest
//
//  Created by Nima Yousefi on 3/18/12.
//  Copyright (c) 2012 Nima Yousefi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NYAppController : NSObject

@property (nonatomic, assign) IBOutlet NSWindow *mainWindow;
@property (nonatomic, assign) IBOutlet NSWindow *detailWindow;

- (IBAction)showMainWindow:(id)sender;
- (IBAction)showDetailWindow:(id)sender;

@end
