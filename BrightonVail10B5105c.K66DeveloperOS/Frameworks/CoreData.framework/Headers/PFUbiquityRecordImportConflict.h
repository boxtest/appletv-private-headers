/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObject, NSString, NSArray, PFUbiquityImportContext, NSDictionary, NSNumber, PFUbiquityKnowledgeVector, NSDate;

@interface PFUbiquityRecordImportConflict : NSObject {
	NSString *_conflictingObjectGlobalIDStr;	// 4 = 0x4
	NSManagedObject *_sourceObject;	// 8 = 0x8
	NSDictionary *_conflictingLogContent;	// 12 = 0xc
	PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_currentKnowledgeVector;	// 20 = 0x14
	int _conflictingLogTransactionType;	// 24 = 0x18
	NSDate *_conflictLogDate;	// 28 = 0x1c
	NSNumber *_conflictingLogTransactionNumber;	// 32 = 0x20
	NSArray *_transactionHistory;	// 36 = 0x24
	NSDictionary *_globalIDIndexToLocalIDURIMap;	// 40 = 0x28
	PFUbiquityImportContext *_importContext;	// 44 = 0x2c
}
@property(retain, nonatomic) NSDate *conflictLogDate;	// G=0x363592cd; S=0x363592dd; @synthesize=_conflictLogDate
@property(retain, nonatomic) NSDictionary *conflictingLogContent;	// G=0x3635928d; S=0x3635929d; @synthesize=_conflictingLogContent
@property(retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;	// G=0x3635933d; S=0x3635934d; @synthesize=_conflictingLogKnowledgeVector
@property(retain, nonatomic) NSNumber *conflictingLogTransactionNumber;	// G=0x3635935d; S=0x3635936d; @synthesize=_conflictingLogTransactionNumber
@property(assign, nonatomic) int conflictingLogTransactionType;	// G=0x363592ad; S=0x363592bd; @synthesize=_conflictingLogTransactionType
@property(retain, nonatomic) NSString *conflictingObjectGlobalIDStr;	// G=0x3635924d; S=0x3635925d; @synthesize=_conflictingObjectGlobalIDStr
@property(retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;	// G=0x3635937d; S=0x3635938d; @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;	// G=0x363592fd; S=0x3635930d; @synthesize=_globalIDIndexToLocalIDURIMap
@property(retain, nonatomic) PFUbiquityImportContext *importContext;	// G=0x3635931d; S=0x3635932d; @synthesize=_importContext
@property(retain, nonatomic) NSManagedObject *sourceObject;	// G=0x3635926d; S=0x3635927d; @synthesize=_sourceObject
@property(retain, nonatomic) NSArray *transactionHistory;	// G=0x363592ed; S=0x36356409; @synthesize=_transactionHistory
+ (id)createTransactionLogForTransactionEntry:(id)transactionEntry withImportContext:(id)importContext error:(id *)error;	// 0x36358ea1
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)knowledgeVector withExportingPeerID:(id)exportingPeerID fromPeerSnapshotCollection:(id)peerSnapshotCollection;	// 0x36357cfd
+ (void)initialize;	// 0x363561dd
+ (int)resolvedTypeForConflictingLogType:(int)conflictingLogType andLatestTransactionEntry:(id)entry skipObject:(BOOL *)object;	// 0x36358081
- (id)init;	// 0x36356241
- (id)_newNormalizedSnapshot:(id)snapshot forObject:(id)object;	// 0x3635646d
// declared property getter: - (id)conflictLogDate;	// 0x363592cd
// declared property getter: - (id)conflictingLogContent;	// 0x3635928d
// declared property getter: - (id)conflictingLogKnowledgeVector;	// 0x3635933d
// declared property getter: - (id)conflictingLogTransactionNumber;	// 0x3635935d
// declared property getter: - (int)conflictingLogTransactionType;	// 0x363592ad
// declared property getter: - (id)conflictingObjectGlobalIDStr;	// 0x3635924d
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)relationship withValue:(id)value withGlobalIDToLocalIDURIMap:(id)localIDURIMap andTransactionLog:(id)log;	// 0x36358b71
- (id)createSnapshotDictionaryForObjectWithEntry:(id)entry inTransactionLog:(id)transactionLog withError:(id *)error;	// 0x3635878d
- (id)createSnapshotDictionaryFromLogEntry:(id)logEntry withError:(id *)error;	// 0x363586fd
- (id)createSnapshotFromLogContent:(id)logContent withTransactionLog:(id)transactionLog;	// 0x36358905
- (id)createSnapshotFromManagedObject:(id)managedObject;	// 0x363583b1
// declared property getter: - (id)currentKnowledgeVector;	// 0x3635937d
- (void)dealloc;	// 0x36356311
- (id)description;	// 0x36359139
// declared property getter: - (id)globalIDIndexToLocalIDURIMap;	// 0x363592fd
// declared property getter: - (id)importContext;	// 0x3635931d
- (BOOL)resolveConflict:(id *)conflict;	// 0x36356825
- (BOOL)resolveMergeConflictForLogContent:(id)logContent previousSnapshot:(id)snapshot andAncestorSnapshot:(id)snapshot3 withOldVersion:(unsigned)oldVersion andNewVersion:(unsigned)version error:(id *)error;	// 0x3635663d
// declared property setter: - (void)setConflictLogDate:(id)date;	// 0x363592dd
// declared property setter: - (void)setConflictingLogContent:(id)content;	// 0x3635929d
// declared property setter: - (void)setConflictingLogKnowledgeVector:(id)vector;	// 0x3635934d
// declared property setter: - (void)setConflictingLogTransactionNumber:(id)number;	// 0x3635936d
// declared property setter: - (void)setConflictingLogTransactionType:(int)type;	// 0x363592bd
// declared property setter: - (void)setConflictingObjectGlobalIDStr:(id)str;	// 0x3635925d
// declared property setter: - (void)setCurrentKnowledgeVector:(id)vector;	// 0x3635938d
// declared property setter: - (void)setGlobalIDIndexToLocalIDURIMap:(id)localIDURIMap;	// 0x3635930d
// declared property setter: - (void)setImportContext:(id)context;	// 0x3635932d
// declared property setter: - (void)setSourceObject:(id)object;	// 0x3635927d
// declared property setter: - (void)setTransactionHistory:(id)history;	// 0x36356409
// declared property getter: - (id)sourceObject;	// 0x3635926d
// declared property getter: - (id)transactionHistory;	// 0x363592ed
@end
