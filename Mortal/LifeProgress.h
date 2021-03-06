//
//  LifeProgress.h
//  Mortal
//
//  Created by Feng Ye on 5/20/12.
//  Copyright (c) 2012 @forresty. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface LifeProgress : NSObject


@property int birthTime;
@property int expectedYearsToLive;

@property (readonly) int expectedLifeSpanInDays;
@property (readonly) int expectedLifeSpanInHours;

@property (readonly) int daysLeft;
@property (readonly) int hoursLeft;

@property (readonly) double percentageLived;
@property (readonly) int secondsLived;
@property (readonly) int hoursLived;
@property (readonly) int daysLived;


- (id)initWithBirthDate:(NSDate *)birthDate;
- (id)initWithBirthDate:(NSDate *)birthDate expectedYearsToLive:(int)years;


@end
