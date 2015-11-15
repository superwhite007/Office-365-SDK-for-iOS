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


/** Implementation for MSGraphRecurrenceRange
 *
 */
@implementation MSGraphRecurrenceRange


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 

        if(_$$$_$$$propertiesNamesMappings==nil) {
    
        _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"Type", @"type", @"StartDate", @"startDate", @"EndDate", @"endDate", @"RecurrenceTimeZone", @"recurrenceTimeZone", @"NumberOfOccurrences", @"numberOfOccurrences", nil];
        
    }
    
    return _$$$_$$$propertiesNamesMappings;
}


- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#microsoft.graph.recurrenceRange";

    }

	return self;
}


- (instancetype) initWithDictionary: (NSDictionary *) dic {
    if((self = [self init])) {
        if(dic!=nil) {
		_type = (![dic objectForKey: @"Type"] || [ [dic objectForKey: @"Type"] isKindOfClass:[NSNull class]] )?_type:[MSGraphRecurrenceRangeTypeSerializer fromString:[dic objectForKey: @"Type"]];
		_startDate = (![dic objectForKey: @"StartDate"] || [ [dic objectForKey: @"StartDate"] isKindOfClass:[NSNull class]] )?_startDate:[MSOrcObjectizer dateFromString:[dic objectForKey: @"StartDate"]];
		_endDate = (![dic objectForKey: @"EndDate"] || [ [dic objectForKey: @"EndDate"] isKindOfClass:[NSNull class]] )?_endDate:[MSOrcObjectizer dateFromString:[dic objectForKey: @"EndDate"]];
		_recurrenceTimeZone = (![dic objectForKey: @"RecurrenceTimeZone"] || [ [dic objectForKey: @"RecurrenceTimeZone"] isKindOfClass:[NSNull class]] )?_recurrenceTimeZone:[[dic objectForKey: @"RecurrenceTimeZone"] copy];
		_numberOfOccurrences = (![dic objectForKey: @"NumberOfOccurrences"] || [ [dic objectForKey: @"NumberOfOccurrences"] isKindOfClass:[NSNull class]] )?_numberOfOccurrences:[[dic objectForKey: @"NumberOfOccurrences"] intValue];
    }
    [self.updatedValues removeAllObjects];
    }
    
    return self;
}

- (NSDictionary *) toDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{[dic setValue: [MSGraphRecurrenceRangeTypeSerializer toString:self.type] forKey: @"Type"];}
	{id curVal = [MSOrcObjectizer stringFromDate:self.startDate];if (curVal!=nil) [dic setValue: curVal forKey: @"StartDate"];}
	{id curVal = [MSOrcObjectizer stringFromDate:self.endDate];if (curVal!=nil) [dic setValue: curVal forKey: @"EndDate"];}
	{id curVal = [self.recurrenceTimeZone copy];if (curVal!=nil) [dic setValue: curVal forKey: @"RecurrenceTimeZone"];}
	{[dic setValue: [NSNumber numberWithInt: self.numberOfOccurrences] forKey: @"NumberOfOccurrences"];}
    [dic setValue: @"#microsoft.graph.recurrenceRange" forKey: @"@odata.type"];

    return dic;
}

- (NSDictionary *) toUpdatedValuesDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

 if([self.updatedValues containsObject:@"Type"])
            { [dic setValue: [MSGraphRecurrenceRangeTypeSerializer toString:self.type] forKey: @"Type"];
}	{id curVal = self.startDate;
    if([self.updatedValues containsObject:@"StartDate"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[MSOrcObjectizer stringFromDate:curVal] forKey: @"StartDate"];
            }
    }
	{id curVal = self.endDate;
    if([self.updatedValues containsObject:@"EndDate"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[MSOrcObjectizer stringFromDate:curVal] forKey: @"EndDate"];
            }
    }
	{id curVal = self.recurrenceTimeZone;
    if([self.updatedValues containsObject:@"RecurrenceTimeZone"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"RecurrenceTimeZone"];
            }
    }
 if([self.updatedValues containsObject:@"NumberOfOccurrences"])
            { [dic setValue: [NSNumber numberWithInt: self.numberOfOccurrences] forKey: @"NumberOfOccurrences"];
}    return dic;
}


/** Setter implementation for property type
 *
 */
- (void) setType: (MSGraphRecurrenceRangeType) value {
    _type = value;
    [self valueChangedFor:@"Type"];
}
       

- (void)setTypeString:(NSString *)string {
        
    _type = [MSGraphRecurrenceRangeTypeSerializer fromString:string];
    [self valueChangedFor:@"Type"]; 
}

/** Setter implementation for property startDate
 *
 */
- (void) setStartDate: (NSDate *) value {
    _startDate = value;
    [self valueChangedFor:@"StartDate"];
}
       
/** Setter implementation for property endDate
 *
 */
- (void) setEndDate: (NSDate *) value {
    _endDate = value;
    [self valueChangedFor:@"EndDate"];
}
       
/** Setter implementation for property recurrenceTimeZone
 *
 */
- (void) setRecurrenceTimeZone: (NSString *) value {
    _recurrenceTimeZone = value;
    [self valueChangedFor:@"RecurrenceTimeZone"];
}
       
/** Setter implementation for property numberOfOccurrences
 *
 */
- (void) setNumberOfOccurrences: (int) value {
    _numberOfOccurrences = value;
    [self valueChangedFor:@"NumberOfOccurrences"];
}
       

@end
