/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class NSURL, SSURLBag, NSString;

@interface MZUPPBagContext : NSObject <NSCopying> {
	SSURLBag *_bag;	// 4 = 0x4
	NSURL *_baseURLForGETAll;	// 8 = 0x8
	NSURL *_baseURLForPUTAll;	// 12 = 0xc
	double _pollingInterval;	// 16 = 0x10
	BOOL _UPPDisabled;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BOOL UPPDisabled;	// G=0x34239879; @synthesize=_UPPDisabled
@property(retain, nonatomic) SSURLBag *bag;	// G=0x342397fd; S=0x3423980d; @synthesize=_bag
@property(copy, nonatomic) NSURL *baseURLForGETAll;	// G=0x3423981d; S=0x34239831; @synthesize=_baseURLForGETAll
@property(copy, nonatomic) NSURL *baseURLForPUTAll;	// G=0x34239841; S=0x34239855; @synthesize=_baseURLForPUTAll
@property(readonly, assign, nonatomic) NSString *domain;	// G=0x342397f1; 
@property(assign, nonatomic) double pollingInterval;	// G=0x342397b9; S=0x34239865; @synthesize=_pollingInterval
+ (void)_loadValueFromBag:(id)bag key:(id)key fallbackKey:(id)key3 completionBlock:(id)block;	// 0x34238d11
+ (double)defaultPollingInterval;	// 0x34239679
+ (void)loadBagContextFromURLBag:(id)urlbag completionBlock:(id)block;	// 0x34238d15
// declared property getter: - (BOOL)UPPDisabled;	// 0x34239879
// declared property getter: - (id)bag;	// 0x342397fd
// declared property getter: - (id)baseURLForGETAll;	// 0x3423981d
// declared property getter: - (id)baseURLForPUTAll;	// 0x34239841
- (id)copyWithZone:(NSZone *)zone;	// 0x34239709
- (void)dealloc;	// 0x34239691
// declared property getter: - (id)domain;	// 0x342397f1
// declared property getter: - (double)pollingInterval;	// 0x342397b9
// declared property setter: - (void)setBag:(id)bag;	// 0x3423980d
// declared property setter: - (void)setBaseURLForGETAll:(id)getall;	// 0x34239831
// declared property setter: - (void)setBaseURLForPUTAll:(id)putall;	// 0x34239855
// declared property setter: - (void)setPollingInterval:(double)interval;	// 0x34239865
@end

