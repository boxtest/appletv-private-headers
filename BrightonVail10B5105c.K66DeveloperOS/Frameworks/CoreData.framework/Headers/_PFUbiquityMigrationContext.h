/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

@interface _PFUbiquityMigrationContext : NSObject {
	PFUbiquityTransactionLog *_transactionLog;	// 4 = 0x4
	PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;	// 8 = 0x8
	PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;	// 12 = 0xc
}
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *destinationStoreSaveSnapshot;	// G=0x363771bd; S=0x363771cd; @synthesize=_destinationStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *sourceStoreSaveSnapshot;	// G=0x3637719d; S=0x363771ad; @synthesize=_sourceStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x3637717d; S=0x3637718d; @synthesize=_transactionLog
- (void)dealloc;	// 0x363770ed
// declared property getter: - (id)destinationStoreSaveSnapshot;	// 0x363771bd
// declared property setter: - (void)setDestinationStoreSaveSnapshot:(id)snapshot;	// 0x363771cd
// declared property setter: - (void)setSourceStoreSaveSnapshot:(id)snapshot;	// 0x363771ad
// declared property setter: - (void)setTransactionLog:(id)log;	// 0x3637718d
- (id)sourceGlobalObjectIDFromCompressedID:(id)compressedID;	// 0x363770cd
// declared property getter: - (id)sourceStoreSaveSnapshot;	// 0x3637719d
// declared property getter: - (id)transactionLog;	// 0x3637717d
@end
