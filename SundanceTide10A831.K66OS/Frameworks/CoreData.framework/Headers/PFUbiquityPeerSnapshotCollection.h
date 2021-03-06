/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface PFUbiquityPeerSnapshotCollection : NSObject {
	NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;	// 4 = 0x4
	NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;	// 8 = 0x8
	NSMutableDictionary *_kvToSnapshot;	// 12 = 0xc
	NSMutableArray *_peerSnapshots;	// 16 = 0x10
	BOOL _needSort;	// 20 = 0x14
}
- (id)init;	// 0x33e5193d
- (void)addSnapshot:(id)snapshot;	// 0x33e51af1
- (id)allPeerIDs;	// 0x33e51ad1
- (BOOL)calculateSnapshotDiffsWithError:(id *)error;	// 0x33e51ec1
- (void)dealloc;	// 0x33e51a29
- (id)knowledgeVectorsForTransactionNumber:(id)transactionNumber exportedByPeerWithID:(id)anId;	// 0x33e51e59
- (id)snapshotForKnowledgeVector:(id)knowledgeVector;	// 0x33e51e39
- (id)snapshotForPeerID:(id)peerID andTransactionNumber:(id)number;	// 0x33e51e8d
@end

