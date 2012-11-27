//
//  main.m
//  FirstApp
//
//  Created by Charles on 12-9-9.
//  Copyright (c) 2012年 Charles. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AppDelegate.h"

int main(int argc, char *argv[])
{
    //@autoreleasepool {
      //  return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    //}
    AppDelegate *ad = [[AppDelegate alloc] init];
    NSString *string = [ad toString];
    
    
    printf("%s",[string cStringUsingEncoding:1]);
}
