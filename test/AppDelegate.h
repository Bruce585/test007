//
//  AppDelegate.h
//  test
//
//  Created by Bruce Wayne on 2020/6/5.
//  Copyright © 2020 Bruce Wayne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

