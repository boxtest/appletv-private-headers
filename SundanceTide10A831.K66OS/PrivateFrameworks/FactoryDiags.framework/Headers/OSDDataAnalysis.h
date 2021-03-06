/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library


@interface OSDDataAnalysis : NSObject {
}
+ (void)initialize;	// 0x321d27f9
+ (id)sharedInstance;	// 0x321d2851
- (id)init;	// 0x321d2861
- (double)average:(double *)average size:(unsigned)size;	// 0x321d2969
- (double)interpolate:(double)interpolate vx:(double *)vx vy:(double *)vy size:(unsigned)size;	// 0x321d28b9
- (double)stdev:(double *)stdev size:(unsigned)size;	// 0x321d2a01
- (double)variance:(double *)variance size:(unsigned)size;	// 0x321d29a1
@end

