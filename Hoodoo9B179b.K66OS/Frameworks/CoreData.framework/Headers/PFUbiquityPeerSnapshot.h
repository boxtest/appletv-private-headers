/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityKnowledgeVector, NSDate, NSMutableDictionary, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshot : NSObject {
@private
	NSDictionary *_logSnapshot;	// 4 = 0x4
	NSMutableDictionary *_diffFromPrevious;	// 8 = 0x8
	PFUbiquityKnowledgeVector *_kv;	// 12 = 0xc
	NSNumber *_transactionNumber;	// 16 = 0x10
	NSDate *_transactionDate;	// 20 = 0x14
	NSString *_exportingPeerID;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDictionary *diffFromPrevious;	// G=0x32c2254d; @synthesize=_diffFromPrevious
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x32c2250d; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x32c2253d; @synthesize=_kv
@property(readonly, assign, nonatomic) NSDictionary *logSnapshot;	// G=0x32c2255d; @synthesize=_logSnapshot
@property(readonly, assign, nonatomic) NSDate *transactionDate;	// G=0x32c2251d; @synthesize=_transactionDate
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x32c2252d; @synthesize=_transactionNumber
- (id)initWithExportingPeerID:(id)exportingPeerID logSnapshot:(id)snapshot transactionNumber:(id)number transactionDate:(id)date andKnowledgeVector:(id)vector;	// 0x32c22651
- (id)initWithTranasctionEntry:(id)tranasctionEntry andLogSnapshot:(id)snapshot;	// 0x32c2256d
- (int)compare:(id)compare;	// 0x32c22c91
- (void)computeDiffToPreviousSnapshot:(id)previousSnapshot;	// 0x32c22975
- (void)dealloc;	// 0x32c22db9
- (id)description;	// 0x32c22cd5
// declared property getter: - (id)diffFromPrevious;	// 0x32c2254d
// declared property getter: - (id)exportingPeerID;	// 0x32c2250d
- (BOOL)isEqual:(id)equal;	// 0x32c2271d
// declared property getter: - (id)knowledgeVector;	// 0x32c2253d
// declared property getter: - (id)logSnapshot;	// 0x32c2255d
- (void)removeValuesChangedByPeerSnapshot:(id)snapshot;	// 0x32c22849
// declared property getter: - (id)transactionDate;	// 0x32c2251d
// declared property getter: - (id)transactionNumber;	// 0x32c2252d
@end

