//
//  Model_ListTheItem.h
//  ToDoList_Project
//
//  Created by BSA Univ3 on 13/09/14.
//  Copyright (c) 2014 BSAU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model_ListTheItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
