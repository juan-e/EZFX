//
//  ModelController.h
//  EZFX
//
//  Created by Jonathan Vredenburg on 5/13/16.
//  Copyright © 2016 Jonathan Vredenburg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

