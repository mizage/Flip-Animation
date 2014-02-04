/*
 This code was originally written by Tyler from Mizage (http://mizage.com)
 This code is licensed under the "Feel free to use this however you want. A shout out would be cool." license.
 Enjoy!
*/

#import <Cocoa/Cocoa.h>

typedef enum {
    NYFlipDirectionLeft = 0,    // default
    NYFlipDirectionRight = 1,
} NYFlipDirection;

//This little class is used to accomodate performSelector:withObject:afterDelay.
@interface FlipArguments : NSObject
{
    NSWindow* toWindow; //the window to which we are flipping
    CFTimeInterval duration; //the duration of the flip
    BOOL shadowed; //draw a shadow under the window while flipping
    NYFlipDirection direction;
}
-(id)initWithToWindow:(NSWindow*)ToWindow flipDuration:(CFTimeInterval)Duration shadowed:(BOOL)Shadowed direction:(NYFlipDirection)theDirection;
@property(readonly,nonatomic)NSWindow* toWindow;
@property(readonly,nonatomic)CFTimeInterval duration;
@property(readonly,nonatomic)BOOL shadowed;
@property(readonly,nonatomic)NYFlipDirection direction;
@end

@interface NSWindow (Flipper)

-(void)flipToWindow:(NSWindow*)to withDuration:(CFTimeInterval)duration shadowed:(BOOL)shadowed;
-(void)flipToWindow:(NSWindow*)to withDuration:(CFTimeInterval)duration shadowed:(BOOL)shadowed direction:(NYFlipDirection)direction;
-(void)flipWithArguments:(FlipArguments*)flipArguments;

@end
