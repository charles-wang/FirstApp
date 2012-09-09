//
//  MasterViewController.h
//  FirstApp
//
//  Created by Charles on 12-9-9.
//  Copyright (c) 2012年 Charles. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
