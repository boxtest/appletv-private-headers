/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSError.h> // Unknown library


@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)domain code:(int)code description:(id)description errorType:(id)type;	// 0x3654f881
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array errorType:(id)type;	// 0x3654f8e1
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array suggestion:(id)suggestion USEnglishSuggestion:(id)suggestion5 underlyingError:(id)error errorType:(id)type;	// 0x36550099
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array underlyingError:(id)error errorType:(id)type;	// 0x3654f915
- (BOOL)MCContainsErrorDomain:(id)domain code:(int)code;	// 0x3654f749
- (id)MCErrorType;	// 0x3654f849
- (id)MCFindPrimaryError;	// 0x3654f5ad
- (id)MCMakePrimaryError;	// 0x3654f671
- (id)MCUSEnglishDescription;	// 0x3654f7e1
- (id)MCUSEnglishSuggestion;	// 0x3654f815
- (id)MCVerboseDescription;	// 0x3654f9e9
@end

