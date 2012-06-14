/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPMessageContext : NSObject {
@private
	NSMutableSet *m_warnings;	// 4 = 0x4
	NSMutableSet *m_errors;	// 8 = 0x8
	NSMutableArray *m_currentObjectStack;	// 12 = 0xc
	NSMutableDictionary *m_placeholderToObjectIdMap;	// 16 = 0x10
}
+ (void)createContextForCurrentThread;	// 0x313b01a9
+ (id)currentObjectOrPlaceholder;	// 0x31239109
+ (id)errorsUsingName:(id)name;	// 0x313af819
+ (id)getErrorArray;	// 0x313b0039
+ (id)getWarningArray;	// 0x313b00c9
+ (void)initialize;	// 0x31189c99
+ (BOOL)isFileStructuredStorage;	// 0x313af805
+ (void)popCurrentObject;	// 0x313afec5
+ (void)popCurrentPlaceholder:(id)placeholder;	// 0x313afd0d
+ (void)pushCurrentObject:(id)object;	// 0x313affa1
+ (id)pushCurrentPlaceholder;	// 0x313afdfd
+ (void)removeContextForCurrentThread;	// 0x313b0159
+ (void)replacePlaceholdersWithObjects;	// 0x313afad1
+ (void)reportError:(CPTaggedMessageStructure *)error;	// 0x313b02c9
+ (void)reportErrorException:(id)exception;	// 0x313b0239
+ (void)reportObject:(id)object withWarning:(CPTaggedMessageStructure *)warning;	// 0x313b0399
+ (void)reportObjectOrPlaceholder:(id)placeholder withWarning:(CPTaggedMessageStructure *)warning parameters:(void *)parameters;	// 0x31239231
+ (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x31239079
+ (void)reportWarningException:(id)exception;	// 0x312e6559
+ (void)restoreObjectStack:(unsigned)stack;	// 0x313af951
+ (unsigned)saveObjectStack;	// 0x313afa5d
+ (void)setIsFileStructuredStorage:(BOOL)storage;	// 0x312e4919
+ (void)setObject:(id)object forPlaceholder:(id)placeholder;	// 0x313af815
+ (id)warningsUsingName:(id)name;	// 0x313af81d
- (id)init;	// 0x313b0495
- (void)dealloc;	// 0x313b040d
@end
