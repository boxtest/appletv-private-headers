/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface OSDIOPowerSource : NSObject {
}
@property(readonly, assign, getter=_adapterCurrent) int adapterCurrent;	// G=0x34ef3401; 
@property(readonly, assign, getter=_adapterDetails) NSDictionary *adapterDetails;	// G=0x34ef3275; 
@property(readonly, assign, getter=_adapterFamilyCode) int adapterFamilyCode;	// G=0x34ef33bd; 
@property(readonly, assign, getter=_adapterID) int adapterID;	// G=0x34ef32ad; 
@property(readonly, assign, getter=_adapterRevision) int adapterRevision;	// G=0x34ef3335; 
@property(readonly, assign, getter=_adapterSerialNumber) int adapterSerialNumber;	// G=0x34ef3379; 
@property(readonly, assign, getter=_adapterSource) int adapterSource;	// G=0x34ef3445; 
@property(readonly, assign, getter=_adapterWatts) int adapterWatts;	// G=0x34ef32f1; 
+ (void)initialize;	// 0x34ef3489
+ (id)sharedInstance;	// 0x34ef34e1
- (id)init;	// 0x34ef34f1
// declared property getter: - (int)_adapterCurrent;	// 0x34ef3401
// declared property getter: - (id)_adapterDetails;	// 0x34ef3275
// declared property getter: - (int)_adapterFamilyCode;	// 0x34ef33bd
// declared property getter: - (int)_adapterID;	// 0x34ef32ad
// declared property getter: - (int)_adapterRevision;	// 0x34ef3335
// declared property getter: - (int)_adapterSerialNumber;	// 0x34ef3379
// declared property getter: - (int)_adapterSource;	// 0x34ef3445
// declared property getter: - (int)_adapterWatts;	// 0x34ef32f1
- (void)dealloc;	// 0x34ef3579
@end
