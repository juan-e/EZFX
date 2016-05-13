//
//  DataViewController.h
//  EZFX
//
//  Created by Jonathan Vredenburg on 5/13/16.
//  Copyright © 2016 Jonathan Vredenburg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

