//
//  iPhone_Audio_ClassAppDelegate.h
//  iPhone-Audio-Class
//
//  Created by Thies Hagedorn on 22.10.10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iPhone_Audio_ClassViewController;

@interface iPhone_Audio_ClassAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    iPhone_Audio_ClassViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet iPhone_Audio_ClassViewController *viewController;

@end

