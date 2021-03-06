//
//  MRDViewController.h
//  Battleship
//
//  Created by Michael Dorsey on 2/25/13.
//  Copyright (c) 2013 Michael Dorsey. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MRDGridViewDelegate.h"
#import "MRDShipViewDelegate.h"

@interface MRDViewController : UIViewController <MRDGridViewDelegate, MRDShipViewDelegate>

@end
