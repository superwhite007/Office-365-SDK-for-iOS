/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import <Foundation/Foundation.h>
#import <office365_odata_interfaces/MSOCredentials.h>

@interface MSOBasicCredentials : NSObject<MSOCredentials>

-(void)addToken : (NSString*) token;

@end