//
//  BNRContainer.h
//  RandomItems
//
//  Created by Qiushi Li on 5/25/15.
//  Copyright (c) 2015 BigNerdRanch. All rights reserved.
//

#import "BNRItem.h"

@interface BNRContainer : BNRItem
{
    NSString *_containerName;
    int _value;
    NSArray *_bnrItems;
}

@end
