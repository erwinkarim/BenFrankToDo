//
//  SIRDetailViewController.h
//  BenFrankToDo
//
//  Created by Malek Zin on 7/1/14.
//  Copyright (c) 2014 Malek Zin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SIRDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
