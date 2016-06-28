//
//  FKViewController.h
//  MoviePlayerTest
//
//  Created by 李世爽 on 15-10-10.
//  Copyright (c) 2015年 crazyit.org. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FKViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *movieView;
- (IBAction)play:(id)sender;
@end
