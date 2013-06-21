/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSDictionary, NSNumber;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {
	NSDictionary *_kv;	// 4 = 0x4
	NSDictionary *_storeKVDict;	// 8 = 0x8
	NSNumber *_sum;	// 12 = 0xc
	unsigned _hash;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x30fdcac1; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x30fdafc9; 
@property(readonly, assign, nonatomic) NSNumber *sum;	// G=0x30fdcab1; @synthesize=_sum
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x30fdc989
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x30fdc88d
- (id)init;	// 0x30fda729
- (id)initFromCopy:(id)copy storeKVDict:(id)dict sum:(id)sum hash:(unsigned)hash;	// 0x30fdaacd
- (id)initWithCoder:(id)coder;	// 0x30fdad39
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x30fda8f1
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary andStoreKnowledgeVectorDictionary:(id)dictionary;	// 0x30fdab5d
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x30fda7bd
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x30fda959
- (void)_updateHash;	// 0x30fdb135
- (void)_updateSum;	// 0x30fdb001
- (id)allPeerIDs;	// 0x30fdb925
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x30fdc22d
- (int)compare:(id)compare;	// 0x30fdada5
- (BOOL)conflictsWithKnowledgeVector:(id)knowledgeVector;	// 0x30fdc411
- (id)copyWithZone:(NSZone *)zone;	// 0x30fdac31
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x30fdbe05
- (id)createKnowledgeVectorString;	// 0x30fdb721
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x30fdb945
- (id)createStoreKnowledgeVectorDictionary;	// 0x30fdc615
- (void)dealloc;	// 0x30fdaba1
- (id)description;	// 0x30fdacb5
- (void)encodeWithCoder:(id)coder;	// 0x30fdad75
// declared property getter: - (unsigned)hash;	// 0x30fdcac1
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x30fdb329
- (BOOL)isDescendantOfKnowledgeVector:(id)knowledgeVector;	// 0x30fdb191
- (BOOL)isEqual:(id)equal;	// 0x30fdaf31
- (BOOL)isZeroVector;	// 0x30fdb4c1
// declared property getter: - (unsigned)length;	// 0x30fdafc9
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x30fdb9bd
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x30fdbfed
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)anId;	// 0x30fdc121
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x30fdbbc5
// declared property getter: - (id)sum;	// 0x30fdcab1
- (id)transactionNumberForPeerID:(id)peerID;	// 0x30fdb905
- (void)updateWithKnowledgeVector:(id)knowledgeVector;	// 0x30fdb5a1
@end
