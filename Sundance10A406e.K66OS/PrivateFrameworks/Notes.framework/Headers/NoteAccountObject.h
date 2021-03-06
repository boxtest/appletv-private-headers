/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import "NoteCollectionObject.h"

@class NSDictionary, NSString, NSNumber, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {
	NSDictionary *_constraints;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *accountIdentifier;	// @dynamic
@property(assign, nonatomic) int accountType;	// G=0x373b98e9; S=0x373b988d; 
@property(retain, nonatomic) NSDictionary *constraints;	// G=0x373b99a1; S=0x373b9d55; @synthesize=_constraints
@property(retain, nonatomic) NSString *constraintsPath;	// @dynamic
@property(retain, nonatomic) NoteStoreObject *defaultStore;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NSString *pathToConstraintsPlist;	// G=0x373b997d; S=0x373b9931; 
@property(retain, nonatomic) NSSet *stores;	// @dynamic
@property(retain, nonatomic) NSNumber *type;	// @dynamic
- (void).cxx_destruct;	// 0x373b9d81
// declared property getter: - (int)accountType;	// 0x373b98e9
- (id)basicAccountIdentifier;	// 0x373b9569
- (id)collectionInfo;	// 0x373b9489
// declared property getter: - (id)constraints;	// 0x373b99a1
- (void)didTurnIntoFault;	// 0x373b9d01
// declared property getter: - (id)pathToConstraintsPlist;	// 0x373b997d
- (id)predicateForNotes;	// 0x373b9415
// declared property setter: - (void)setAccountType:(int)type;	// 0x373b988d
// declared property setter: - (void)setConstraints:(id)constraints;	// 0x373b9d55
// declared property setter: - (void)setPathToConstraintsPlist:(id)constraintsPlist;	// 0x373b9931
- (BOOL)shouldMarkNotesAsDeleted;	// 0x373b9af5
- (id)storeForExternalId:(id)externalId;	// 0x373b958d
- (BOOL)validateDefaultStore:(id *)store error:(id *)error;	// 0x373b9b99
@end

