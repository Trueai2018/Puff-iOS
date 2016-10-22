//
//  MasterViewController.h
//  Puff
//
//  Created by bob.sun on 16/9/14.
//  Copyright © 2016年 bob.sun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Puff+CoreDataModel.h"
#import "_PFAccount+CoreDataClass.h"

//#import <MMDrawerController/MMDrawerController.h>


@interface MasterViewController : UIViewController

- (void)lockViews;
//@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<_PFAccount *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

