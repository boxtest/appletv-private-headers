/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSCalendarDate.h> // Unknown library
#import "DAEAS-Structs.h"


@interface NSCalendarDate (DataAccessUtils)
+ (id)combinedDateWithYMDFrom:(id)from HMSFrom:(id)from2 componentDatesTimezone:(id)timezone;	// 0x33a33345
- (void)getGregorianDate:(XXStruct_fhKmAA *)date;	// 0x33a334bd
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x33a3312d
- (id)nearestMidnight;	// 0x33a331e9
- (id)tzDateToDateInGMT:(id)gmt;	// 0x33a33059
@end
