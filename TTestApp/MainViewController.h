//
//  MainViewController.h
//  TTestApp
//
//  Created by Rodney Degracia on 5/30/13.
//  Copyright (c) 2013 Organisation. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@property (strong, nonatomic) NSString* mainViewControllerString;

@property (strong, nonatomic) IBOutlet UILabel *labelOne;
@property (strong, nonatomic) IBOutlet UILabel *labelTwo;

@end
