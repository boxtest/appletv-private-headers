/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASChangedCollectionLeaf.h"
#import "DADataElement.h"

@class NSDate, NSArray, NSNumber, NSString, NoteObject;

@interface ASNote : ASChangedCollectionLeaf <DADataElement> {
	NoteObject *_localRecord;	// 64 = 0x40
	NSString *_body;	// 68 = 0x44
	NSNumber *_bodyTruncated;	// 72 = 0x48
	BOOL _bodyIsPlaintext;	// 76 = 0x4c
	NSArray *_categories;	// 80 = 0x50
	NSString *_subject;	// 84 = 0x54
	NSString *_messageClass;	// 88 = 0x58
	NSDate *_lastModifiedDate;	// 92 = 0x5c
}
@property(retain, nonatomic) NSString *body;	// G=0x34bb5c99; S=0x34bb5ca9; @synthesize=_body
@property(assign) BOOL bodyIsPlaintext;	// G=0x34bb5cdd; S=0x34bb5cf5; @synthesize=_bodyIsPlaintext
@property(retain) NSNumber *bodyTruncated;	// G=0x34bb5cb9; S=0x34bb5ccd; @synthesize=_bodyTruncated
@property(retain) NSArray *categories;	// G=0x34bb5d0d; S=0x34bb5d21; @synthesize=_categories
@property(retain) NSDate *lastModifiedDate;	// G=0x34bb5d79; S=0x34bb5d8d; @synthesize=_lastModifiedDate
@property(retain) NoteObject *localRecord;	// G=0x34bb5d9d; S=0x34bb5db1; @synthesize=_localRecord
@property(retain) NSString *messageClass;	// G=0x34bb5d55; S=0x34bb5d69; @synthesize=_messageClass
@property(retain) NSString *subject;	// G=0x34bb5d31; S=0x34bb5d45; @synthesize=_subject
+ (BOOL)acceptsTopLevelLeaves;	// 0x34bb4389
+ (id)asParseRules;	// 0x34bb452d
+ (BOOL)frontingBasicTypes;	// 0x34bb4485
+ (id)noteWithLocalNoteObject:(id)localNoteObject serverID:(id)anId account:(id)account;	// 0x34bb4b65
+ (BOOL)notifyOfUnknownTokens;	// 0x34bb44d9
+ (BOOL)parsingLeafNode;	// 0x34bb43dd
+ (BOOL)parsingWithSubItems;	// 0x34bb4431
- (id)initWithCoder:(id)coder;	// 0x34bb5b9d
- (id)initWithLocalNoteObject:(id)localNoteObject serverID:(id)anId account:(id)account;	// 0x34bb4ae5
- (void)_loadAttributesFromLocalNoteObject:(id)localNoteObject forAccount:(id)account;	// 0x34bb4885
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x34bb55cd
// declared property getter: - (id)body;	// 0x34bb5c99
// declared property getter: - (BOOL)bodyIsPlaintext;	// 0x34bb5cdd
// declared property getter: - (id)bodyTruncated;	// 0x34bb5cb9
// declared property getter: - (id)categories;	// 0x34bb5d0d
- (int)dataclass;	// 0x34bb4881
- (void)dealloc;	// 0x34bb4bad
- (BOOL)deleteFromContainer:(void *)container;	// 0x34bb5b85
- (BOOL)deleteFromNoteContext;	// 0x34bb5575
- (id)description;	// 0x34bb4c75
- (void)encodeWithCoder:(id)coder;	// 0x34bb5c1d
// declared property getter: - (id)lastModifiedDate;	// 0x34bb5d79
- (void)loadClientIDs;	// 0x34bb5a95
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x34bb5b55
- (BOOL)loadNoteObjectForAccount:(id)account;	// 0x34bb5821
// declared property getter: - (id)localRecord;	// 0x34bb5d9d
// declared property getter: - (id)messageClass;	// 0x34bb5d55
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x34bb54dd
- (void)postProcessApplicationData;	// 0x34bb5235
- (BOOL)saveServerIDToExistingItem;	// 0x34bb5b6d
- (BOOL)saveServerIDToNoteDB;	// 0x34bb5a5d
- (BOOL)saveToNoteDBWithExistingRecord:(id)existingRecord intoNoteStore:(id)store shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x34bb4ce1
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x34bb5b11
// declared property setter: - (void)setBody:(id)body;	// 0x34bb5ca9
// declared property setter: - (void)setBodyIsPlaintext:(BOOL)plaintext;	// 0x34bb5cf5
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x34bb5ccd
// declared property setter: - (void)setCategories:(id)categories;	// 0x34bb5d21
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x34bb5d8d
- (void)setLocalItem:(void *)item;	// 0x34bb5b45
// declared property setter: - (void)setLocalRecord:(id)record;	// 0x34bb5db1
// declared property setter: - (void)setMessageClass:(id)aClass;	// 0x34bb5d69
// declared property setter: - (void)setSubject:(id)subject;	// 0x34bb5d45
// declared property getter: - (id)subject;	// 0x34bb5d31
@end
