/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSError.h> // Unknown library


@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)domain code:(int)code description:(id)description errorType:(id)type;	// 0x362214d1
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array errorType:(id)type;	// 0x3622156d
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array suggestion:(id)suggestion USEnglishSuggestion:(id)suggestion5 underlyingError:(id)error errorType:(id)type;	// 0x362215dd
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array underlyingError:(id)error errorType:(id)type;	// 0x362215a5
- (BOOL)MCContainsErrorDomain:(id)domain code:(int)code;	// 0x36222099
- (id)MCErrorType;	// 0x36222235
- (id)MCFindPrimaryError;	// 0x36221e4d
- (id)MCMakePrimaryError;	// 0x36221f99
- (id)MCUSEnglishDescription;	// 0x36222195
- (id)MCUSEnglishSuggestion;	// 0x362221e5
- (id)MCVerboseDescription;	// 0x36221a69
@end

