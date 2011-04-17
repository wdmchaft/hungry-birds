//
//  hungry_birdsAppDelegate.h
//  hungry-birds
//
//  Created by Peter Spier on 4/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class hungry_birdsViewController;

@interface hungry_birdsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet hungry_birdsViewController *viewController;

@end
