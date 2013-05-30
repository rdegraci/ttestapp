//
//  FlipsideViewController.h
//  TTestApp
//
//  Created by Rodney Degracia on 5/30/13.
//  Copyright (c) 2013 Organisation. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UILabel *labelThree;
@property (strong, nonatomic) NSString* flipsideViewControllerString;
- (IBAction)done:(id)sender;

@end
