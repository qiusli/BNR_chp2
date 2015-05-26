//
//  BNRContainer.m
//  RandomItems
//
//  Created by Qiushi Li on 5/25/15.
//  Copyright (c) 2015 BigNerdRanch. All rights reserved.
//

#import "BNRContainer.h"

@implementation BNRContainer

- (NSString *) description {
    int sum = _value;
    for (BNRItem *item in _bnrItems) {
        sum += item.valueInDollars;
    }
    NSString *descriptionString = [[NSString alloc] initWithFormat: @"%@ %d", _containerName, sum];
    return descriptionString;   
}

@end
