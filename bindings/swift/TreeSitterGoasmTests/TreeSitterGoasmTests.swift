import XCTest
import SwiftTreeSitter
import TreeSitterGoasm

final class TreeSitterGoasmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_goasm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Goasm grammar")
    }
}
