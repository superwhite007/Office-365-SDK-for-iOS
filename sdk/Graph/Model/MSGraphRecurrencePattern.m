/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#import "MSGraphModels.h"
#import "core/MSOrcObjectizer.h"


/** Implementation for MSGraphRecurrencePattern
 *
 */
@implementation MSGraphRecurrencePattern


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 

        if(_$$$_$$$propertiesNamesMappings==nil) {
    
        _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"Type", @"type", @"Interval", @"interval", @"Month", @"month", @"DayOfMonth", @"dayOfMonth", @"DaysOfWeek", @"daysOfWeek", @"FirstDayOfWeek", @"firstDayOfWeek", @"Index", @"index", nil];
        
    }
    
    return _$$$_$$$propertiesNamesMappings;
}


- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#microsoft.graph.recurrencePattern";

    }

	return self;
}


- (instancetype) initWithDictionary: (NSDictionary *) dic {
    if((self = [self init])) {
        if(dic!=nil) {
		_type = (![dic objectForKey: @"Type"] || [ [dic objectForKey: @"Type"] isKindOfClass:[NSNull class]] )?_type:[MSGraphRecurrencePatternTypeSerializer fromString:[dic objectForKey: @"Type"]];
		_interval = (![dic objectForKey: @"Interval"] || [ [dic objectForKey: @"Interval"] isKindOfClass:[NSNull class]] )?_interval:[[dic objectForKey: @"Interval"] intValue];
		_month = (![dic objectForKey: @"Month"] || [ [dic objectForKey: @"Month"] isKindOfClass:[NSNull class]] )?_month:[[dic objectForKey: @"Month"] intValue];
		_dayOfMonth = (![dic objectForKey: @"DayOfMonth"] || [ [dic objectForKey: @"DayOfMonth"] isKindOfClass:[NSNull class]] )?_dayOfMonth:[[dic objectForKey: @"DayOfMonth"] intValue];

        if([dic objectForKey: @"DaysOfWeek"] != [NSNull null]){
            _daysOfWeek = [[MSOrcChangesTrackingArray alloc] init];
            
            for (id object in [dic objectForKey: @"DaysOfWeek"]) {
                [_daysOfWeek addObject:@([MSGraphDayOfWeekSerializer fromString:object])];
            }
            
            [(MSOrcChangesTrackingArray *)_daysOfWeek resetChangedFlag];
        }
        
		_firstDayOfWeek = (![dic objectForKey: @"FirstDayOfWeek"] || [ [dic objectForKey: @"FirstDayOfWeek"] isKindOfClass:[NSNull class]] )?_firstDayOfWeek:[MSGraphDayOfWeekSerializer fromString:[dic objectForKey: @"FirstDayOfWeek"]];
		_index = (![dic objectForKey: @"Index"] || [ [dic objectForKey: @"Index"] isKindOfClass:[NSNull class]] )?_index:[MSGraphWeekIndexSerializer fromString:[dic objectForKey: @"Index"]];
    }
    [self.updatedValues removeAllObjects];
    }
    
    return self;
}

- (NSDictionary *) toDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{[dic setValue: [MSGraphRecurrencePatternTypeSerializer toString:self.type] forKey: @"Type"];}
	{[dic setValue: [NSNumber numberWithInt: self.interval] forKey: @"Interval"];}
	{[dic setValue: [NSNumber numberWithInt: self.month] forKey: @"Month"];}
	{[dic setValue: [NSNumber numberWithInt: self.dayOfMonth] forKey: @"DayOfMonth"];}
	{    NSMutableArray *curVal = [[NSMutableArray alloc] init];
    
    for(id obj in self.daysOfWeek) {
       [curVal addObject:[MSGraphDayOfWeekSerializer toString:obj]];
    }
    
    if([curVal count]==0) curVal=nil;
if (curVal!=nil) [dic setValue: curVal forKey: @"DaysOfWeek"];}
	{[dic setValue: [MSGraphDayOfWeekSerializer toString:self.firstDayOfWeek] forKey: @"FirstDayOfWeek"];}
	{[dic setValue: [MSGraphWeekIndexSerializer toString:self.index] forKey: @"Index"];}
    [dic setValue: @"#microsoft.graph.recurrencePattern" forKey: @"@odata.type"];

    return dic;
}

- (NSDictionary *) toUpdatedValuesDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

 if([self.updatedValues containsObject:@"Type"])
            { [dic setValue: [MSGraphRecurrencePatternTypeSerializer toString:self.type] forKey: @"Type"];
} if([self.updatedValues containsObject:@"Interval"])
            { [dic setValue: [NSNumber numberWithInt: self.interval] forKey: @"Interval"];
} if([self.updatedValues containsObject:@"Month"])
            { [dic setValue: [NSNumber numberWithInt: self.month] forKey: @"Month"];
} if([self.updatedValues containsObject:@"DayOfMonth"])
            { [dic setValue: [NSNumber numberWithInt: self.dayOfMonth] forKey: @"DayOfMonth"];
} if([self.updatedValues containsObject:@"DaysOfWeek"])
            { [dic setValue: [MSGraphDayOfWeekSerializer toString:self.daysOfWeek] forKey: @"DaysOfWeek"];
} if([self.updatedValues containsObject:@"FirstDayOfWeek"])
            { [dic setValue: [MSGraphDayOfWeekSerializer toString:self.firstDayOfWeek] forKey: @"FirstDayOfWeek"];
} if([self.updatedValues containsObject:@"Index"])
            { [dic setValue: [MSGraphWeekIndexSerializer toString:self.index] forKey: @"Index"];
}    return dic;
}


/** Setter implementation for property type
 *
 */
- (void) setType: (MSGraphRecurrencePatternType) value {
    _type = value;
    [self valueChangedFor:@"Type"];
}
       

- (void)setTypeString:(NSString *)string {
        
    _type = [MSGraphRecurrencePatternTypeSerializer fromString:string];
    [self valueChangedFor:@"Type"]; 
}

/** Setter implementation for property interval
 *
 */
- (void) setInterval: (int) value {
    _interval = value;
    [self valueChangedFor:@"Interval"];
}
       
/** Setter implementation for property month
 *
 */
- (void) setMonth: (int) value {
    _month = value;
    [self valueChangedFor:@"Month"];
}
       
/** Setter implementation for property dayOfMonth
 *
 */
- (void) setDayOfMonth: (int) value {
    _dayOfMonth = value;
    [self valueChangedFor:@"DayOfMonth"];
}
       
/** Setter implementation for property daysOfWeek
 *
 */
- (void) setDaysOfWeek: (NSMutableArray *) value {
    _daysOfWeek = value;
    [self valueChangedFor:@"DaysOfWeek"];
}
       
/** Setter implementation for property firstDayOfWeek
 *
 */
- (void) setFirstDayOfWeek: (MSGraphDayOfWeek) value {
    _firstDayOfWeek = value;
    [self valueChangedFor:@"FirstDayOfWeek"];
}
       

- (void)setFirstDayOfWeekString:(NSString *)string {
        
    _firstDayOfWeek = [MSGraphDayOfWeekSerializer fromString:string];
    [self valueChangedFor:@"FirstDayOfWeek"]; 
}

/** Setter implementation for property index
 *
 */
- (void) setIndex: (MSGraphWeekIndex) value {
    _index = value;
    [self valueChangedFor:@"Index"];
}
       

- (void)setIndexString:(NSString *)string {
        
    _index = [MSGraphWeekIndexSerializer fromString:string];
    [self valueChangedFor:@"Index"]; 
}


@end
