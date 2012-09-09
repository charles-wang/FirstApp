//
//  DetailViewController.h
//  FirstApp
//
//  Created by Charles on 12-9-9.
//  Copyright (c) 2012年 Charles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
