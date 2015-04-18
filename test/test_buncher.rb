gem "minitest"
require "minitest/autorun"
require "buncher"

class TestBuncher < Minitest::Test
  def test_sanity
    assert_equal 'hello world', Buncher.hello_world
  end
end
