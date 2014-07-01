//
//  SIRMasterViewController.h
//  BenFrankToDo
//
//  Created by Malek Zin on 7/1/14.
//  Copyright (c) 2014 Malek Zin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface SIRMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
