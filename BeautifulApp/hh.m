//
//  hh.m
//  BeautifulApp
//
//  Created by tanny on 16/3/3.
//  Copyright © 2016年 xiaoming. All rights reserved.
//

#import "hh.h"

@implementation hh

@end
@implementation Data

+ (NSDictionary *)objectClassInArray{
    return @{@"apps" : [Apps class]};
}

@end


@implementation Apps

+ (NSDictionary *)objectClassInArray{
    return @{@"up_users" : [Up_Users class]};
}

@end


@implementation Info

@end


@implementation Comments

+ (NSDictionary *)objectClassInArray{
    return @{@"data" : [kData class]};
}

@end


@implementation kData

@end


@implementation Up_Users

@end


