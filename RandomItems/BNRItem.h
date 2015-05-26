//
//  BNRItem.h
//  RandomItems
//
//  Created by Qiushi Li on 5/25/15.
//  Copyright (c) 2015 BigNerdRanch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString *_itemName, *_serialNumber;
    int _valueInDollars;
    NSDate *_dateCreated;
}

+ (instancetype) randomItem;

// designated initializer
- (instancetype) initWithItemName: (NSString *)name
                        valueInDollars: (int) value
                        serialNumber: (NSString *)sNumber;

- (instancetype) initWithItemName: (NSString *)name;

- (instancetype) initWithItemName: (NSString *)name
                     serialNumber: (NSString *)sNumber;

- (void) setItemName: (NSString *)str;
- (NSString *) itemName;

- (void) setSerialNumber: (NSString *)str;
- (NSString *) serialNumber;

- (void) setValueInDollars: (int)v;
- (int) valueInDollars;

- (NSDate *) dateCreated;

@end
